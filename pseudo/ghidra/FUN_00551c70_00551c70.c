// FUN_00551c70  00551c70

void __fastcall FUN_00551c70(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  switch(*(undefined1 *)(param_1 + 0x19)) {
  case 0:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_GARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 1:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_PATHAND");
    strcpy(local_40c,pcVar1);
    break;
  case 2:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 3:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOROYAL1OR2WILD");
    strcpy(local_40c,pcVar1);
    break;
  case 4:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOWILDROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 5:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 6:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOWILDROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 7:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_TWOTOROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 8:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_TWOTOROYALJQORKHIGH");
    strcpy(local_40c,pcVar1);
    break;
  case 9:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSF");
    strcpy(local_40c,pcVar1);
    break;
  case 10:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOWILDSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0xb:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTO1OR2DEUCESF");
    strcpy(local_40c,pcVar1);
    break;
  case 0xc:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0xd:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOSFOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0xe:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOSFINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0xf:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOSFDOUBLEINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x10:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOSF10JHIGH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x11:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOWILDSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0x12:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_TWOTOSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0x13:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOUROFAKIND");
    strcpy(local_40c,pcVar1);
    break;
  case 0x14:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOUROFAKINDJOKER");
    strcpy(local_40c,pcVar1);
    break;
  case 0x15:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOUROFAKIND1OR2WILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x16:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURWILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x17:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOS");
    strcpy(local_40c,pcVar1);
    break;
  case 0x18:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x19:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1a:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSJQORK");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1b:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSACEHIGH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1c:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOS2OR3HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1d:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSUNDER2HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1e:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSWITHACEINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1f:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSWITH3HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x20:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOS3HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x21:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOS3HIGHCARDSINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x22:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOSWILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x23:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOFLUSH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x24:
    if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOWILDFLUSH");
      strcpy(local_40c,pcVar1);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTO1WILDFLUSH");
      strcpy(local_40c,pcVar1);
    }
    break;
  case 0x25:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_FOURTOJOKERFLUSHACEKING");
    strcpy(local_40c,pcVar1);
    break;
  case 0x26:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREETOFLUSH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x27:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREEOFAKIND");
    strcpy(local_40c,pcVar1);
    break;
  case 0x28:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREEOFAKINDWILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x29:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_THREEWILDGARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2a:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_TWOPAIR");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2b:
    if ((*(int *)(DAT_007947e0 + 0x4f14) == 3) || (*(int *)(DAT_007947e0 + 0x4f14) == 4)) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_PAIR10ORBETTER");
      strcpy(local_40c,pcVar1);
    }
    if (((*(int *)(DAT_007947e0 + 0x4f14) == 0) || (*(int *)(DAT_007947e0 + 0x4f14) == 1)) ||
       (*(int *)(DAT_007947e0 + 0x4f14) == 2)) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_PAIRJACKSORBETTER");
      strcpy(local_40c,pcVar1);
    }
    if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_TWOKINGSORTWOACES");
      strcpy(local_40c,pcVar1);
    }
    break;
  case 0x2c:
    if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_JOKERPLUSKINGORBETTER");
      strcpy(local_40c,pcVar1);
    }
    if (*(int *)(DAT_007947e0 + 0x4f14) == 9) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_JOKERPLUSJACKORBETTER");
      strcpy(local_40c,pcVar1);
    }
    break;
  case 0x2d:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_LOWPAIR");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2e:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_ONEPAIR");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2f:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_TWOWILDGARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x30:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_JOKERPLUS5TO10");
    strcpy(local_40c,pcVar1);
    break;
  case 0x31:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_WILDGARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x32:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_ACEANDKING");
    strcpy(local_40c,pcVar1);
    break;
  case 0x33:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_ACEORKING");
    strcpy(local_40c,pcVar1);
    break;
  case 0x34:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_123HIGHCARDS");
    strcpy(local_40c,pcVar1);
  }
  pcVar1 = local_40c;
  uVar2 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar1);
  FUN_0057be80(1,uVar2,pcVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

