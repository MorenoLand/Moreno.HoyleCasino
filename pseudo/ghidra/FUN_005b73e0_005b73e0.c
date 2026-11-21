// FUN_005b73e0  005b73e0

void __thiscall FUN_005b73e0(int param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 local_c [8];
  
  FUN_005b73c0(param_2,1);
  FUN_005b7380(param_2,param_3);
  cVar1 = FUN_005b6660(param_2);
  if (cVar1 != '\0') {
    FUN_005b51a0(local_c,param_2);
    (**(code **)(**(int **)(param_1 + 0x580 + param_2 * 4) + 0xc4))(local_c,1,0);
  }
  return;
}

