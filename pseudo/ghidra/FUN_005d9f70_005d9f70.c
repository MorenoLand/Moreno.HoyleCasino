// FUN_005d9f70  005d9f70

void __thiscall FUN_005d9f70(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_00795f95 == '\0') {
    if (((DAT_0163068c == 0) && (iVar2 = FUN_006375b0(), param_3 != iVar2)) &&
       (cVar1 = (**(code **)(*param_1 + 0x130))(*(undefined4 *)(param_3 + 0x20)), cVar1 != '\0')) {
      FUN_0064d480(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_3);
    }
    else {
      cVar1 = FUN_005da7b0();
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x174))(4);
      }
      else {
        uVar3 = FUN_00630f40("SID_CASINO_TOURNAMENTPLAY",0);
        uVar3 = FUN_00630f40("SID_CASINO_TOURNAMENT_CANTCHANGEPLAYERS",uVar3);
        FUN_0062ff10(uVar3);
      }
    }
  }
  return;
}

