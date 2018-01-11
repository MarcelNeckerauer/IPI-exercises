//Bonuswürdig: -theoretisch zwei verschiedene Bäume
//             - Mutiges Arbeiten mit User-Input!
//             - Ein bisschen Spaß <3
//             - Ein Weihnachtswunder


#include <iomanip>
#include <iostream>



void printTree()
{
	

	for(int i = 0; i < 16; i++)
	{
for(int g = 16-i; g > 0; g--)
			{
				std::cout << " ";
			}
     
       for(int j = (2*i)*-1; j < 0; j++)
		{
          
		   std::cout << "*";
        }
       	
         std::cout << std::endl;
     }
     
for(int h = 0; h < 5; h++)
{
    for(int b = 14; b > 0; b--)
    {
    	std::cout << " ";
    }

	for(int k=0; k < 3; k++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
}
}
// 1B 2A 42 = *

void killTree()
{ 

  
   
    
    std::cout << "           ******                                                         " << std::endl;  
    std::cout << "           ************                                                      " << std::endl;
    std::cout << "           *******************                                                  " << std::endl;  
    std::cout << "           **************************                                             " << std::endl;
    std::cout << "           *********************************                                                             " << std::endl;
    std::cout << "           ***************************************                                  " << std::endl;
    std::cout << "           *********************************************                                            " << std::endl;                                                    
    std::cout << "           **************************************************                                                   " << std::endl;                                                  
    std::cout << "           ******************************************************                                            " << std::endl;                                                   
    std::cout << "           ***********************************************************                                             " << std::endl;                                                    
    std::cout << "           ****************************************************************                                              " << std::endl;                                           
    std::cout << "           ********************************************************************                                              " << std::endl;                                                  
    std::cout << " *********************************************************************************                                            " << std::endl;                                                    
    std::cout << " **********************************************************************************                                              " << std::endl;                                                    
    std::cout << " ******************************************************************************                                              " << std::endl;                                                    
    std::cout << "           *********************************************************************                                            " << std::endl;                                                    
    std::cout << "           ******************************************************************                                            " << std::endl;                                                    
    std::cout << "           ***************************************************************                                              " << std::endl;                                                    
    std::cout << "           ************************************************************                                              " << std::endl;                                                    
    std::cout << "           *******************************************************                                              " << std::endl;                                                   
    std::cout << "           ****************************************************                                              " << std::endl;                                                
    std::cout << "           ************************************************                                              " << std::endl;
}



int main()
{
int auswahl;
	printTree();
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Einen schönen Weihnachtsbaum haben sie da! Wäre doch schade, wenn ihm etwas zustoßen würde!" << std::endl;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Wollen sie Bonuspunkte als Schutzgeld für ihren Weihnachtsbaum zahlen?" << std::endl;
	std::cout << "1. Ja" << std::endl;
	std::cout << "2. Nein" << std::endl;
	std::cin >> auswahl;

	if(auswahl == 1)
	{
		std::cout << "Gute Entscheidung! Frohe Weihnachten!" << std::endl;
		return 0;
	}
	 else if (auswahl == 2)
	{
		std::cout << "Schlechte Wahl!" << std::endl;
		killTree();
		std::cout << std::endl << "Schade! Kaputt! Trotzdem frohe Weihnachten" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Ey es gab nur zwei Möglichkeiten! Nicht schummeln! Trotzdem frohe Weihnachten" << std::endl;
		return 0;
	}

	return 0;
}