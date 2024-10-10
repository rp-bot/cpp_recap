output: main.o deposit.o BankAccount.o
	g++ main.o deposit.o BankAccount.o -o bank_app

main.o: main.cpp BankAccount.h
	g++ -c main.cpp

deposit.o: deposit.cpp BankAccount.h
	g++ -c deposit.cpp

BankAccount.o: BankAccount.cpp BankAccount.h
	g++ -c BankAccount.cpp

clean:
	rm *.o bank_app
	
run:
	./bank_app