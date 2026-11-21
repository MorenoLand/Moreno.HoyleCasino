// FUN_0045fa10  0045fa10

void FUN_0045fa10(undefined2 param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  uVar1 = FUN_00641280(param_1);
  uVar4 = extraout_var;
  switch(uVar1) {
  case 0:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKNONE");
    strcpy(param_2,pcVar2);
    break;
  case 1:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKACELOW");
    strcpy(param_2,pcVar2);
    break;
  case 2:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK2");
    strcpy(param_2,pcVar2);
    break;
  case 3:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK3");
    strcpy(param_2,pcVar2);
    break;
  case 4:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK4");
    strcpy(param_2,pcVar2);
    break;
  case 5:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK5");
    strcpy(param_2,pcVar2);
    break;
  case 6:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK6");
    strcpy(param_2,pcVar2);
    break;
  case 7:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK7");
    strcpy(param_2,pcVar2);
    break;
  case 8:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK8");
    strcpy(param_2,pcVar2);
    break;
  case 9:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK9");
    strcpy(param_2,pcVar2);
    break;
  case 10:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANK10");
    strcpy(param_2,pcVar2);
    break;
  case 0xb:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKJACK");
    strcpy(param_2,pcVar2);
    break;
  case 0xc:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKQUEEN");
    strcpy(param_2,pcVar2);
    break;
  case 0xd:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKKING");
    strcpy(param_2,pcVar2);
    break;
  case 0xe:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKACEHIGH");
    strcpy(param_2,pcVar2);
    break;
  case 0xf:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_RANKJOKER");
    strcpy(param_2,pcVar2);
  }
  uVar3 = FUN_00641290(param_1);
  switch(uVar3) {
  case 0:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_NOSUIT",uVar3,uVar1,uVar4);
    strcat(param_2,pcVar2);
    break;
  case 1:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_CLUBS",uVar3,uVar1,uVar4);
    strcat(param_2,pcVar2);
    break;
  case 2:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_DIAMONDS",uVar3,uVar1,uVar4);
    strcat(param_2,pcVar2);
    break;
  case 3:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_HEARTS",uVar3,uVar1,uVar4);
    strcat(param_2,pcVar2);
    break;
  case 4:
    pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER_SPADES",uVar3,uVar1,uVar4);
    strcat(param_2,pcVar2);
  }
  return;
}

