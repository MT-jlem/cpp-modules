#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _nbDeposits(0), _nbWithdrawals(0){
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";created\n";
    _totalAmount += initial_deposit;
    ++_nbAccounts;
}

Account::~Account( void ){

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount<< ";closed\n";
}

int	Account::getNbAccounts( void ){
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals<< '\n';
}



void	Account::makeDeposit( int deposit ){
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _nbDeposits++;
    std::cout << ";amount:"<< _amount << ";nb_deposits:" << _nbDeposits<< '\n';
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (checkAmount())
    {
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << '\n';
    }
    else
        std::cout << "refused\n";
    return 0;
}

int		Account::checkAmount( void ) const{
    return (_amount > 100) ? 1 : 0;
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals<< '\n';
}

void	Account::_displayTimestamp( void ){
    std::time_t tmp = time(nullptr);
    std::tm *now = localtime(&tmp);
    std::cout << '[' << (now->tm_year + 1900) << (now->tm_mon + 1) << now->tm_mday;
    std::cout << '_' << now->tm_hour << now->tm_min << now->tm_sec << "] ";
}

Account::Account( void ): _nbDeposits(0), _nbWithdrawals(0){
    _accountIndex = _nbAccounts;
    _amount = 0;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";created\n";
    ++_nbAccounts;
}