int decimal;
    cout << "Enter a number lesser than 16:_";
    cin >> decimal;
    cout << decimal;
    cout << "\n";
    int result = 0;
    for(int i = 0; i < 4;i++)
    {
        result += decimal % 2;
        decimal = decimal / 2;
    }
    cout << "There are ";
    cout << result;
    cout << " ones in binary representation of your number";
