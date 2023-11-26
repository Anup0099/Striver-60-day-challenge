#include <bits/stdc++.h> 
using namespace std;
// 12. Movie Theater Reservation
// There is a movie theater that has n rows of seats, and m seats in each row. A ticketing service allocates the seats among the q incoming booking requests.
// Implement the classes and methods of the ticketing service. Return whether the seats are available for incoming queries.
// Implement the classes and methods defined below.
// 1. A class named SeatReservation:
// Instance Variables
// Name
// Functionality
// n
// Stores the value of number of rows in theater.
// m
// Stores the value of total number of seats per row.
// Constructor
// Name
// SeatReservation(...)
// Functionality
// A parameterized constructor that initializes the instance variables.
// Methods
// Name
// Functionality
// Stores the value of total number of seats per row.
// ALL
// Constructor
// Name
// Functionality
// SeatReservation(...)
// A parameterized constructor that initializes the instance variables.
// Methods
// Name
// string reserve(int r, int k)
// Functionality
// Return "Booked with seat number s" where s is the starting number of the seat otherwise prints "Seats not available".
// 11
// 12
// 13
// 14
// 15
// マ
// If the seats are available, the function should return a string with the first seat number of the booked seat in the format "Booked with seat number s" where s is the number of the first seat available in the pth row. If it is not possible, return "Seats not available" and do not reserve a seat.
// Example:
// n = 2, m = 3
// 9 = 2
// first query: (1, 3)
// second query (2, 4)
// "The theater has 2 rows of 3 seats.
// The first request is for 3 seats in row 1. They are available, starting at seat 1. Return "Booked with seat number 1"
// The secand auerv is for 4 coate in row ว

output:
Booked with seat number 1
Seats not available
// 2. A class named Theater:
// Instance Variables
// Name
class SeatReservation
{
public:
    int n, m;
    int query;
    vector<vector<int>> seats;
    SeatReservation(int n, int m)
    {
        this->n = n;
        this->m = m;
        seats.resize(n, vector<int>(m, 0));
    }
    string reserve(int r, int k)
    {
        if (r > n || k > m)
        {
            return "Seats not available";
        }
        int i = 0;
        while (i < m)
        {
            if (seats[r - 1][i] == 0)
            {
                
                int j = i;
                while (j < m && j - i < k)
                {
                    if (seats[r - 1][j] == 0)
                    {
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }



                if (j - i == k)
                {
                    for (int l = i; l < j; l++)
                    {
                        seats[r - 1][l] = 1;
                    }
                    return "Booked with seat number " + to_string(i + 1);
                }
                else
                {
                    i = j;
                }
            }
            else
            {
                i++;
            }
        }
        return "Seats not available";
    }

  
};
// Functionality

// Constructor

int main()
{
     
}