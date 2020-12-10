CREATE TABLE Societe(
        ID                    Int  IDENTITY(1,1) NOT NULL ,
        Nom_Societe           Text NOT NULL ,
        Numero_Service_Client Text NOT NULL ,
        Logo                  Varbinary(MAX) NOT NULL ,
        Adresse_Societe       Text NOT NULL
	,CONSTRAINT Societe_PK PRIMARY KEY (ID)
)

CREATE TABLE Article(
        ID                     Int  IDENTITY(1,1) NOT NULL ,
        Nom_Article            Text NOT NULL ,
        Quantite_Article_Stock Int NOT NULL
	,CONSTRAINT Article_PK PRIMARY KEY (ID)
)

CREATE TABLE Cout(
        ID         Int  IDENTITY(1,1) NOT NULL ,
        Cout_HT    Int NOT NULL ,
        Cout_TVA   Int NOT NULL ,
        Cout_TTC   Int NOT NULL ,
        TVA      Int NOT NULL ,
        Remise   Int NOT NULL ,
        Marge    Int NOT NULL ,
        Demarque Int NOT NULL
	,CONSTRAINT Cout_PK PRIMARY KEY (ID)
)

CREATE TABLE Personne(
        ID              Int  IDENTITY(1,1) NOT NULL ,
        Nom_Personne    Text NOT NULL ,
        Prenom_Personne Text NOT NULL
	,CONSTRAINT Personne_PK PRIMARY KEY (ID)
)

CREATE TABLE Commande(
        ID                        Int  IDENTITY(1,1) NOT NULL ,
        L2_Nom                    Text NOT NULL ,
        L2_Prenom                 Text NOT NULL ,
        L3_Ville                  Text NOT NULL ,
        Annee_Commande            Int NOT NULL ,
        Date_Emission             Date NOT NULL ,
        Date_Livraison            Date NOT NULL ,
        Date_Paiement             Date NOT NULL ,
        Moyen_Paiement            Text NOT NULL ,
        Nb_Total_Article          Int NOT NULL ,
        Prix_Total_HT             Int NOT NULL ,
        Prix_Total_TVA            Int NOT NULL ,
        Prix_Total_TTC            Int NOT NULL ,
        Quantite_Article_Commande Int NOT NULL ,
        ID_Client                 Int NOT NULL
	,CONSTRAINT Commande_PK PRIMARY KEY (ID)
)

CREATE TABLE Adresse(
        ID                  Int  IDENTITY(1,1) NOT NULL ,
        Code_Postal         Text NOT NULL ,
        Rue                 Text NOT NULL ,
        Ville               Text NOT NULL ,
        Numero_De_Rue       Int NOT NULL ,
        Adresse_Facturation Text NOT NULL ,
        Adresse_Livraison   Text NOT NULL ,
        Adresse_Societe     Text NOT NULL ,
        ID_Client           Int NOT NULL ,
        ID_Personne         Int NOT NULL
	,CONSTRAINT Adresse_PK PRIMARY KEY (ID)
)

CREATE TABLE Client(
        ID             Int  IDENTITY(1,1) NOT NULL ,
        Date_Naissance Date NOT NULL ,
        ID_Facture     Int ,
        ID_Personne    Int NOT NULL
	,CONSTRAINT Client_PK PRIMARY KEY (ID)
)

CREATE TABLE Personnel(
        ID            Int  IDENTITY(1,1) NOT NULL ,
        Date_Embauche Date NOT NULL ,
        ID_Societe    Int NOT NULL ,
        ID_Personnel  Int ,
        ID_Personne   Int NOT NULL
	,CONSTRAINT Personnel_PK PRIMARY KEY (ID)
)

CREATE TABLE Facture(
        ID          Int  IDENTITY(1,1) NOT NULL ,
        ID_Societe  Int NOT NULL ,
        ID_Commande Int NOT NULL
	,CONSTRAINT Facture_PK PRIMARY KEY (ID)
)

CREATE TABLE contient(
        ID          Int NOT NULL ,
        ID_Commande Int NOT NULL ,
        quantite    Int NOT NULL
	,CONSTRAINT contient_PK PRIMARY KEY (ID,ID_Commande)
)




ALTER TABLE Commande
	ADD CONSTRAINT Commande_Client0_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Client0_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Personne1_FK
	FOREIGN KEY (ID_Personne)
	REFERENCES Personne(ID);

ALTER TABLE Client
	ADD CONSTRAINT Client_Facture0_FK
	FOREIGN KEY (ID_Facture)
	REFERENCES Facture(ID);

ALTER TABLE Client
	ADD CONSTRAINT Client_Personne1_FK
	FOREIGN KEY (ID_Personne)
	REFERENCES Personne(ID);

ALTER TABLE Client 
	ADD CONSTRAINT Client_Personne0_AK 
	UNIQUE (ID_Personne);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Societe0_FK
	FOREIGN KEY (ID_Societe)
	REFERENCES Societe(ID);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Personnel1_FK
	FOREIGN KEY (ID_Personnel)
	REFERENCES Personnel(ID);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Personne2_FK
	FOREIGN KEY (ID_Personne)
	REFERENCES Personne(ID);

ALTER TABLE Personnel 
	ADD CONSTRAINT Personnel_Personne0_AK 
	UNIQUE (ID_Personne);

ALTER TABLE Facture
	ADD CONSTRAINT Facture_Societe0_FK
	FOREIGN KEY (ID_Societe)
	REFERENCES Societe(ID);

ALTER TABLE Facture
	ADD CONSTRAINT Facture_Commande1_FK
	FOREIGN KEY (ID_Commande)
	REFERENCES Commande(ID);

ALTER TABLE Facture 
	ADD CONSTRAINT Facture_Commande0_AK 
	UNIQUE (ID_Commande);

ALTER TABLE contient
	ADD CONSTRAINT contient_Article0_FK
	FOREIGN KEY (ID)
	REFERENCES Article(ID);

ALTER TABLE contient
	ADD CONSTRAINT contient_Commande1_FK
	FOREIGN KEY (ID_Commande)
	REFERENCES Commande(ID);