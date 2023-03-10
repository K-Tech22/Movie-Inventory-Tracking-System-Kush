#include <iostream>
#include "transaction.h"
#include "customer.h"

Transaction::Transaction()
{
  // instance variables not set
}

Transaction::Transaction(char mediaType, char transactionType, Movie mv, Customer account)
{
  this->mediaType = mediaType;
  this->transactionType = transactionType;
  this->mv = mv;
  this->account = account;
}

void Transaction::display()
{

  switch (this->transactionType)
  {
  case 'B':
    cout << "Borrowed " << this->mv.getTitle() << " by " << this->mv.getDirectorName();
    break;
  case 'R':
    cout << "Returned " << this->mv.getTitle() << " by " << this->mv.getDirectorName();
    break;
  default:
    break;
  }
}

char Transaction::getMediaType()
{
  return this->mediaType;
}

void Transaction::setMediaType(char mType)
{
  this->mediaType = mType;
}

char Transaction::getTransactionType()
{
  return this->transactionType;
}

void Transaction::setTransactionType(char tType)
{
  this->transactionType = tType;
}

Movie Transaction::getMovie()
{
  return this->mv;
}

void Transaction::setMovie(Movie mv)
{
  this->mv = mv;
}
