#include <iostream>
using namespace std ;

int main() {
    cout << "Enter a number : ";
    int num;
    cin >> num;
    //SQUARE
    cout << endl << "PATTERN 1 : Square" << endl << endl ;
    for(int i = 1 ; i <= num ; i++ )
    {
        for(int j = 1 ; j <= num ; j++ )
        {
            cout << "* ";
        }
        cout << endl ;
    }

    //RECTANGLE
    cout << endl << "PATTERN 2 : Rectangle" << endl << endl ;
    for(int i = 1 ; i <= 3 ; i++ )
    {
        for(int j = 1 ; j <= 8 ; j++ )
        {
            cout << "* ";
        }
        cout << endl ;
    }

    //HOLLOW RECTANGLE
    cout << endl << "PATTERN 3 : Hollow Rectangle" << endl << endl ;
    for(int i = 1 ; i <= 3 ; i++ )
    {
        for(int j = 1 ; j <= 8 ; j++ )
        {
            if (i == 1 || i == 3)
            {
                cout << "* ";
            }
            else
            {
                if( j == 1 || j == 8 ){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl ;
    }

    //HALF PYRAMID
    cout << endl << "PATTERN 4 : Half Pyramid" << endl << endl ;
    for(int i = 1 ; i <= num ; i++ )
    {
        for(int j = 1 ; j <= i ; j++ )
        {
            cout << "* ";
        }
        cout << endl ;
    }

    //INVERTED HALF PYRAMID
    cout << endl << "PATTERN 5 : Inverted Half Pyramid" << endl << endl ;
    for(int i = num ; i >= 1 ; i-- )
    {
        for(int j = 1 ; j <= i ; j++ )
        {
            cout << "* ";
        }
        cout << endl ;
    }
    
    //NUMERIC HALF PYRAMID
    cout << endl << "PATTERN 6 : Numeric Half Pyramid" << endl << endl ;
    for(int i = 1 ; i <= num ; i++ )
    {
        for(int j = 1 ; j <= i ; j++ )
        {
            cout << j << " ";
        }
        cout << endl ;
    }

    //INVERTED NUMERIC HALF PYRAMID
    cout << endl << "PATTERN 7 : Inverted Numeric Half Pyramid" << endl << endl ;
    for(int i = num ; i >= 1 ; i-- )
    {
        for(int j = 1 ; j <= i ; j++ )
        {
            cout << j << " ";
        }
        cout << endl ;
    }

    //FULL PYRAMID
    cout << endl << "PATTERN 8 : Full Pyramid" << endl << endl ;
    for(int row = 0 ; row < num ; row ++)
    {
        //spaces
        for(int col = 0 ; col < num-row-1 ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row+1; col++)
        {
            cout << "* " ;
        }
        cout << endl ;
    }

    //INVERTED FULL PYRAMID
    cout << endl << "PATTERN 9 : Inverted Full Pyramid" << endl << endl ;
    for(int row = num ; row > 0 ; row --)
    {
        //spaces
        for(int col = 0 ; col < num-row ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row; col++)
        {
            cout << "* " ;
        }
        cout << endl ;
    }
    
    //DIAMOND
    cout << endl << "PATTERN 10 : Diamond" << endl << endl ;
    for(int row = 0 ; row < num/2 ; row ++)
    {
        //spaces
        for(int col = 0 ; col < num/2-row-1 ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row+1; col++)
        {
            cout << "* " ;
        }
        cout << endl ;
    }
    for(int row = num/2 ; row > 0 ; row --)
    {
        //spaces
        for(int col = 0 ; col < num/2-row ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row; col++)
        {
            cout << "* " ;
        }
        cout << endl ;
    }

    //HOLLOW PYRAMID
    cout << endl << "PATTERN 11 : Hollow Full Pyramid" << endl << endl ;
    for(int row = 0 ; row < num ; row ++)
    {
        //spaces
        for(int col = 0 ; col < num-row-1 ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row+1; col++)
        {
            if(col == 0 || col == row)
            {
                cout << "* " ;
            }
            else
            {
                cout << "  " ;
            }
        }
        cout << endl ;
    }


    //INVERTED HOLLOW PYRAMID
    cout << endl << "PATTERN 12 : Inverted Hollow Full Pyramid" << endl << endl ;
    for(int row = num ; row > 0 ; row --)
    {
        //spaces
        for(int col = 0 ; col < num-row ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row; col++)
        {
            if(col == 0 || col == row-1)
            {
                cout << "* " ;
            }
            else
            {
                cout << "  " ;
            }
        }
        cout << endl ;
    }


    //INVERTED HOLLOW DIAMOND
    cout << endl << "PATTERN 13 : Inverted Hollow Diamond" << endl << endl ;
    for(int row = 0 ; row < num/2 ; row ++)
    {
        //spaces
        for(int col = 0 ; col < num/2-row-1 ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row+1; col++)
        {
            if(col == 0 || col == row)
            {
                cout << "* " ;
            }
            else
            {
                cout << "  " ;
            }
        }
        cout << endl ;
    }
    for(int row = num/2 ; row > 0 ; row --)
    {
        //spaces
        for(int col = 0 ; col < num/2-row ; col ++)
        {
            cout << " " ;
        }
        //stars
        for(int col = 0; col < row; col++)
        {
            if(col == 0 || col == row-1)
            {
                cout << "* " ;
            }
            else
            {
                cout << "  " ;
            }
        }
        cout << endl ;
    }    

    // HOLLOW DIAMOND
    cout << endl << "PATTERN 14 : Hollow Diamond in a Square" << endl << endl ;
    for(int row = 0 ; row<num/2 ; row ++)
    {
        //inverted pyramid  
        for(int col=0 ; col<num/2-row; col++)
        {
            cout << "* " ;
        }

        //spaces
        for(int col=0 ; col<2*row+1 ; col++)
        {
            cout << "  " ;
        }
        //inverted pyramid
        for(int col=0 ; col<num/2-row ; col++)
        {
            cout << "* ";
        }
        cout << endl ;
    }
    for(int row = 0 ; row<num/2 ; row ++)
    {
        //inverted pyramid  
        for(int col=0 ; col<row+1; col++)
        {
            cout << "* " ;
        }

        //spaces
        for(int col=0 ; col<num -2*row -1 ; col++)
        {
            cout << "  " ;
        }
        //inverted pyramid
        for(int col=0 ; col<row+1 ; col++)
        {
            cout << "* ";
        }
        cout << endl ;
    }

    //NUMBERS AND STARS PYRAMID
    cout << endl << "PATTERN 15 : Numbers and stars Pyramid" << endl << endl ;
    for(int i = 1 ; i <= num ; i++)
    {
        int count = i-1 ;
        for (int j = 1 ; j <=i ; j++)
        {
            cout << i <<" " ;
            if(count==0) break;
            cout << "* ";
            count--;
        }
        cout << endl ;
    }
    //other method to do the same 
    cout<<endl<<"2nd Method for doing the same \n\n";
    for (int row = 0 ; row <num ; row++)
    {
        for (int col=0 ; col<2*row+1; col++)
        {
            if(col%2==1) cout<<"* ";
            else cout << row+1 <<" ";
        }
        cout<<endl ;
    }

    //ALPHABETS PATTERN
    cout << endl << "PATTERN 16 : Alphabets Pyramid" << endl << endl ;
    for(int row =0 ; row<num ; row ++)
    {
        char ch ;
        for(int col = 0 ; col < row+1 ; col++)
        {
            ch = col + 'A' ;
            cout << ch ;
        }
        for (char aplhabet = ch ; ch>'A' ;)
        {
            ch--;
            cout << ch ;
        }
        cout << endl ;
    }

    //PRACTICE
    cout << endl << "PATTERN 17 : Hollow Full Pyramid" << endl << endl ;
    for(int row = 0 ; row < num ; row++)
    {
        //spaces
        for(int col = 0 ; col <num-row-1 ; col++)
        {
            cout << " " ;
        }
        //pyramid
        for (int col = 0 ; col< row+1 ; col++)
        {
            if (row ==0 || row== num-1)
            {
                cout << "* ";
            }
            else{
                if(col == 0 || col == row)
                {
                    cout << "* ";
                }
                else cout << "  ";
            }
            
        }
        cout << endl;
    } 
    
    return 0 ;
}
