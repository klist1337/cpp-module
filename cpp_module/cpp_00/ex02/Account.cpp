/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:34:32 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/05 22:13:00 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void Account::_displayTimestamp()
{
  char buff[18];
  time_t t;
  struct tm *timeinfo;

  time(&t);
  timeinfo = localtime(&t);
  strftime(buff, 18, "[%Y%m%d_%H%M%S]", timeinfo);
  std::cout << buff << ' '; 
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts) ,
      _amount(_totalAmount), _nbDeposits(_totalNbDeposits), _nbWithdrawals(_totalNbWithdrawals)
{
  this->_amount = initial_deposit;
  _displayTimestamp();
  Account::_nbAccounts += 1;
  Account::_totalAmount += initial_deposit;
  std::cout << "index:" << this->_accountIndex << ';' 
  << "amount:" << this->_amount << ";created" << std::endl;
}

Account::Account()
{
}

Account::~Account()
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ';'
  << "amount:" << this->_amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
  _displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts() << ';'
  << "total:" << Account::getTotalAmount() <<";deposits:"
  << Account::getNbDeposits() << ';'
  << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ';'
  << "p_amount:" << this->_amount << ';' ;
  if (withdrawal > this->_amount)
    std::cout << "withdrawal:" << "refused" << std::endl;
  else
  {
    this->_nbWithdrawals += 1;
    Account::_totalNbWithdrawals += 1;
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ';'
    << "amount:" << this->_amount << ';'
    << "nb_withdrawals:" << this->_nbWithdrawals << std::endl; 
  }
  
  return (false);
}

void Account::displayStatus() const
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ';' 
  << "amount:" << this->_amount << ';'
  << "deposits:"<< this->_nbDeposits << ';'
  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
  _displayTimestamp();
  this->_nbDeposits += 1;
  std::cout << "index:" << this->_accountIndex << ';'
  << "p_amount:" << this->_amount << ';'
  << "deposit:" << deposit << ';' ;
  this->_amount += deposit;
  Account::_totalNbDeposits += 1;
  Account::_totalAmount += deposit;
  std::cout << "amount:"  << this->_amount << ';'
  << "nb_deposits:" << this->_nbDeposits << std::endl;
}

int Account::checkAmount() const
{
  return (0);
}

int Account::getNbAccounts ()
{
  return Account::_nbAccounts;
}

int Account::getTotalAmount()
{
  return Account::_totalAmount;
}

int Account::getNbDeposits()
{
  return Account::_totalNbDeposits;  
}

int Account::getNbWithdrawals()
{
  return Account::_totalNbWithdrawals;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
