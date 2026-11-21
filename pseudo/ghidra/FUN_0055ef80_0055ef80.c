// FUN_0055ef80  0055ef80

void __fastcall FUN_0055ef80(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  switch(*(undefined1 *)(param_1 + 0x19)) {
  case 0:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_GARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 1:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_PATHAND");
    strcpy(local_40c,pcVar1);
    break;
  case 2:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 3:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOROYAL1OR2WILD");
    strcpy(local_40c,pcVar1);
    break;
  case 4:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOWILDROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 5:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 6:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOWILDROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 7:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_TWOTOROYAL");
    strcpy(local_40c,pcVar1);
    break;
  case 8:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_TWOTOROYALJQORKHIGH");
    strcpy(local_40c,pcVar1);
    break;
  case 9:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSF");
    strcpy(local_40c,pcVar1);
    break;
  case 10:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOWILDSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0xb:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTO1OR2DEUCESF");
    strcpy(local_40c,pcVar1);
    break;
  case 0xc:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0xd:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOSFOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0xe:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOSFINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0xf:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOSFDOUBLEINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x10:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOSF10JHIGH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x11:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOWILDSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0x12:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_TWOTOSF");
    strcpy(local_40c,pcVar1);
    break;
  case 0x13:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOUROFAKIND");
    strcpy(local_40c,pcVar1);
    break;
  case 0x14:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOUROFAKINDJOKER");
    strcpy(local_40c,pcVar1);
    break;
  case 0x15:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOUROFAKIND1OR2WILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x16:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURWILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x17:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOS");
    strcpy(local_40c,pcVar1);
    break;
  case 0x18:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x19:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1a:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSJQORK");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1b:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSACEHIGH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1c:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOS2OR3HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1d:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSUNDER2HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1e:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSWITHACEINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x1f:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSWITH3HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x20:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOS3HIGHCARDSOUTSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x21:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOS3HIGHCARDSINSIDE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x22:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOSWILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x23:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOFLUSH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x24:
    if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOWILDFLUSH");
      strcpy(local_40c,pcVar1);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTO1WILDFLUSH");
      strcpy(local_40c,pcVar1);
    }
    break;
  case 0x25:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_FOURTOJOKERFLUSHACEKING");
    strcpy(local_40c,pcVar1);
    break;
  case 0x26:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREETOFLUSH");
    strcpy(local_40c,pcVar1);
    break;
  case 0x27:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREEOFAKIND");
    strcpy(local_40c,pcVar1);
    break;
  case 0x28:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREEOFAKINDWILD");
    strcpy(local_40c,pcVar1);
    break;
  case 0x29:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_THREEWILDGARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2a:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_TWOPAIR");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2b:
    if ((*(int *)(DAT_007947e0 + 0x4f14) == 3) || (*(int *)(DAT_007947e0 + 0x4f14) == 4)) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_PAIR10ORBETTER");
      strcpy(local_40c,pcVar1);
    }
    if (((*(int *)(DAT_007947e0 + 0x4f14) == 0) || (*(int *)(DAT_007947e0 + 0x4f14) == 1)) ||
       (*(int *)(DAT_007947e0 + 0x4f14) == 2)) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_PAIRJACKSORBETTER");
      strcpy(local_40c,pcVar1);
    }
    if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_TWOKINGSORTWOACES");
      strcpy(local_40c,pcVar1);
    }
    break;
  case 0x2c:
    if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_JOKERPLUSKINGORBETTER");
      strcpy(local_40c,pcVar1);
    }
    if (*(int *)(DAT_007947e0 + 0x4f14) == 9) {
      pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_JOKERPLUSJACKORBETTER");
      strcpy(local_40c,pcVar1);
    }
    break;
  case 0x2d:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_LOWPAIR");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2e:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_ONEPAIR");
    strcpy(local_40c,pcVar1);
    break;
  case 0x2f:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_TWOWILDGARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x30:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_JOKERPLUS5TO10");
    strcpy(local_40c,pcVar1);
    break;
  case 0x31:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_WILDGARBAGE");
    strcpy(local_40c,pcVar1);
    break;
  case 0x32:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_ACEANDKING");
    strcpy(local_40c,pcVar1);
    break;
  case 0x33:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_ACEORKING");
    strcpy(local_40c,pcVar1);
    break;
  case 0x34:
    pcVar1 = (char *)FUN_00630f40("SID_VIDEOPOKER_MULTI_123HIGHCARDS");
    strcpy(local_40c,pcVar1);
  }
  pcVar1 = local_40c;
  uVar2 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar1);
  FUN_0057be80(1,uVar2,pcVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

