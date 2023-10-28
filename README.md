# Tintereiro
do{

        readStructScores(pPieces, pHouses);

        drawInterfaceWithStruct(pPieces, actualPiece, pHouses);

        getUserInput(pTextCommand);
        
        int i = pTextCommand[0] - 65;
        int j = pTextCommand[1] - '1';
        int i2 = pTextCommand[2] - 65;
        int j2 = pTextCommand[3] - '1';
        
        //* Comando invalido
        if(i < 0 || i > 5 || j < 0 || j > 5) {
            printf("A coordenada enviada é invalida");
            continue;
        }else if(i2 < 0 || i2 > 5 || j2 < 0 || j2 > 5) {
            printf("A coordenada enviada é invalida");
            continue;
        }

        if(pPieces[i][j].intriged == 1 || pPieces[i2][j2].intriged == 1){
            printf("A casa selecionada ja realizou intriga");
            continue;
        }

        int casa1 = pHouses[pPieces[i][j].value - 1].intriged;
        int casa2 = pHouses[pPieces[i2][j2].value - 1].intriged;

        if(casa1 == 1 && casa2 ==1){
            printf("As casas selecionadas ja realizaram intriga");
            continue;
        }

        if(!(j == j2 && (i-i2 == -1 || i-i2 == 1))){
            printf("As casas devem ser adjacentes");
            continue;
        } else if(!(i == i2 && (j-j2 == -1 || j-j2 == 1))){
            printf("As casas devem ser adjacentes");
            continue;
        }

        int temp = pPieces[i][j].value;
        pPieces[i][j].value = pPieces[i2][j2].value;
        pPieces[i][j].value = temp;

        int victory = validateVictory(pHouses);

        if(victory == 1){
            clearScreen();
            printf("Você venceu!");
            printf("A guerra foi evitada!");
            intriga = 0;
            getchar();
        }
        
    }while(intriga == 1);