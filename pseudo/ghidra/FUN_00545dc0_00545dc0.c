// FUN_00545dc0  00545dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00545dc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(DAT_00793408 + 0x34) + 0x70))();
  (**(code **)(*DAT_0162ee84 + 0x80))(0x311733,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    FUN_00548d20(1);
    break;
  case 1:
    FUN_00548d20(0);
    break;
  case 2:
    FUN_00544e30();
    break;
  case 3:
    cVar1 = FUN_00549ad0();
    if (cVar1 == '\0') {
      uVar2 = FUN_00630f40("SID_VIDEOBLACKJACK_CANTSPLIT_TITLE",0);
      uVar2 = FUN_00630f40("SID_VIDEOBLACKJACK_CANTSPLIT_MESSAGE",uVar2);
      FUN_0062ff10(uVar2);
    }
    else {
      FUN_00549c00();
    }
    break;
  case 4:
    cVar1 = FUN_005497a0();
    if (cVar1 == '\0') {
      uVar2 = FUN_00630f40("SID_VIDEOBLACKJACK_CANTDOUBLE_TITLE",0);
      uVar2 = FUN_00630f40("SID_VIDEOBLACKJACK_CANTDOUBLE_MESSAGE",uVar2);
      FUN_0062ff10(uVar2);
    }
    else {
      FUN_005499a0();
    }
    break;
  case 5:
    FUN_00549750();
    break;
  case 6:
    FUN_00545410(0,0x14);
    FUN_005491f0();
    break;
  case 7:
    FUN_005496a0();
    break;
  case 8:
    FUN_00544f00();
  }
  return;
}

