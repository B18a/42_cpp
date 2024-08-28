/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:37:56 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 11:09:33 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

// Definition and Initialization of the static member variable
// the static keyword is redundant because its already implemented in the class
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Parameterized Constructor
Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

// Constructor
Account::Account(void){}

// Destructor
Account::~Account(void)
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_nbAccounts << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";deposit:" << deposit << ";amount:" << Account::_amount
		+ deposit << ";nb_deposits:" << Account::_nbDeposits << std::endl;
	this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount;
	if (this->_amount - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << Account::_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (0);
}

int Account::checkAmount(void) const
{
	return (getTotalAmount());
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t timestamp = std::time(nullptr);
	std::cout << std::put_time(localtime(&timestamp), "[%Y%m%d_%H%M%S] ");
}
