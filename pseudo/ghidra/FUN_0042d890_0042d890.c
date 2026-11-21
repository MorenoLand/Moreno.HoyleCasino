// FUN_0042d890  0042d890

void __thiscall FUN_0042d890(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_c [2];
  
  local_c[0] = 0xfc5;
  local_c[1] = 0xfc7;
  FUN_005eaf00(local_c[*(int *)(param_1 + 0x20)]);
  cVar1 = FUN_005f54a0();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(DAT_007906dc + 0x148 + *(int *)(param_1 + 0x20) * 4) + 0xb0))(0);
  }
  else {
    (**(code **)(**(int **)(DAT_007906dc + 0x148 + *(int *)(param_1 + 0x20) * 4) + 0xb0))(5);
  }
  (**(code **)(**(int **)(DAT_007906dc + 0x148 + *(int *)(param_1 + 0x20) * 4) + 0x74))();
  FUN_006010d0(param_2,0);
  return;
}

