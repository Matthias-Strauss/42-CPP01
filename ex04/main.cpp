/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:17:30 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 21:06:12 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sifl.hpp"

std::string replace(std::string fileContent, std::string s1, std::string s2)
{
	size_t position;
	position = fileContent.find(s1);
	while ((position = fileContent.find(s1, position)) != std::string::npos)
	{
		fileContent.erase(position, s1.length());
		fileContent.insert(position, s2);
		position += s2.length();
	}
	return fileContent;
}

int main(int ac, char **av)
{
	// Reject invalid input
	if (ac != 4)
	{
		std::cerr << "Usage: ./sifl <filename> <string1> <string2>" << std::endl;
		return 1;
	}

	// Convert args
	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	// Open file
	std::ifstream inputFile(fileName);

	// File opening error handling
	if (!inputFile.is_open())
	{
		std::cerr << "Error: file could not be opened" << std::endl;
		return 1;
	}

	// Copy file content to string
	std::string fileContent((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());

	if (fileContent.empty())
	{
		std::cerr << "Error: file is empty" << std::endl;
		return 1;
	}
	fileContent = replace(fileContent, s1, s2);

	// Create output file
	std::ofstream outputFile(fileName + ".replace");

	// File creation and opening error handling
	if (!outputFile.is_open())
	{
		std::cerr << "Error: file could not be created" << std::endl;
		return 1;
	}

	outputFile << fileContent;
	outputFile.close();

	return 0;
}