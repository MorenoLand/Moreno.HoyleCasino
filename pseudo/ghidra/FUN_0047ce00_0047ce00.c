// FUN_0047ce00  0047ce00

void __thiscall FUN_0047ce00(undefined4 param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005da7b0(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*DAT_007947e4 + 0x26c))(param_2,param_3);
  }
  else {
    iVar2 = FUN_00480d20();
    *param_2 = iVar2;
    *param_3 = *param_2 << 1;
  }
  return;
}

