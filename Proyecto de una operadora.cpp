#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	string numero;
	
	
	cout<<"[1][2][3]"<<endl;
	cout<<"[4][5][6]"<<endl;
	cout<<"[7][8][9]"<<endl;
	cout<<"[#][0][*]"<<endl;
	cout<<"   [C]"<<endl;
	cout    <<"";cin>>numero;
	
	if(numero == "#100#"){
		cout<<"\n\tOperadora de CLARO";
		cout<<"\n";
		cout<<"\n1. Consultar balance: "<<endl;
		cout<<"2. Solicita prestamo: "<<endl;
		cout<<"3. Ofertas: "<<endl;
		cout<<"4. Paqueticos: "<<endl;
		cout<<"5. Salir: "<<endl;
		
		int opcion;
		cout<<"";cin>>opcion;
		
		if(opcion == 1){
			cout<<"Usted cuenta con un balance de 0";	
		}
		else{
			if(opcion == 2){
				int opcion1;
				cout<<"\n\tPrestamo";
				cout<<"\n";
				cout<<"\n1. 50: "<<endl;
		        cout<<"2. 100: "<<endl;
		        cout<<"3. 150: "<<endl;
		        cout<<"4. Salir: "<<endl;
		        cout<<"";cin>>opcion1;
		        cout<<"\n"<<endl;
		        
		        
		        if(opcion1 == 1){
		        	cout<<"Su balance es de 50";
				}
				else{
					if(opcion1 == 2){
						cout<<"Su balance es de 100";
					}
					else{
						if(opcion1 == 3){
						   cout<<"Su balance es de 150";
					   }
					   else{	
					        if(opcion1 == 4){
						    return 0;
						    
					       }
					   }  
					   
					}
				}
		        
		        
			}
			else{
				if(opcion == 3){
					cout<<"En mantenimiento";
				}
				else{
					if(opcion == 4){
						int opcion2;
				        cout<<"\n\tPaquetico";
				        cout<<"\n";
			            cout<<"\n1. Data libre: "<<endl;
		                cout<<"2. internet social: "<<endl;
		                cout<<"3. Salir: "<<endl;
		                cout<<"";cin>>opcion2;
		                cout<<"\n"<<endl;
		                
		                if(opcion2 == 1){
		                	int opcion3;
		                	cout<<"\n1. 49/1 Dia: "<<endl;
		                    cout<<"2. 99/3 Dias: "<<endl;
		                    cout<<"3. 150/5 Dias: "<<endl;
		                    cout<<"4. Salir: "<<endl;
		                    cout<<"";cin>>opcion3;
		                    
		                    
		                    if(opcion3 == 1){
		        	        cout<<"Has activado un paquetico de 1 Dia";
				            }
				            else{
					            if(opcion3 == 2){
						            cout<<"Has activado un paquetico de 3 Dias";
				            	}
				            	else{
						           if(opcion3 == 3){
						                cout<<"Has activado un paquetico de 5 Dias";
					               }
					                else{	
					                   if(opcion3 == 4){
						                    return 0;
					                   }
					               }  
					           }
			            	}

		                    
						}
						else{
							if(opcion2 == 2){
								int opcion4;
		                	    cout<<"\n1. 29/30 Min: "<<endl;
		                        cout<<"2. 49/1 Dia: "<<endl;
		                        cout<<"3. 99/3 Dias/ilimitado: "<<endl;
		                        cout<<"4. Salir: "<<endl;
		                        cout<<"";cin>>opcion4;
		                    
		                    
		                        if(opcion4 == 1){
		        	                cout<<"Has activado un paquetico de 30 minutos";
				               }
				               else{
					               if(opcion4 == 2){
						                cout<<"Has activado un paquetico de 1 Dia";
				                   }
				            	   else{
						               if(opcion4 == 3){
						                cout<<"Has activado un paquetico de 3 Dias";
					                   }
					                    else{	
					                        if(opcion4 == 4){
						                        return 0;
					                       }
					                   }  
					               }
			            	   }
							}
							else{
								if(opcion2 == 3){
									return 0;
								}
							}
						}
					}
					else{
						if(opcion == 5){
							return 0;
						}
					}
				}
			}
		}
	}
	else{
		cout<<"Usted no tiene saldo para relizar esta llamada";//otra operacion interezante
	}
	
	
	
	getch();
	return 0;
}