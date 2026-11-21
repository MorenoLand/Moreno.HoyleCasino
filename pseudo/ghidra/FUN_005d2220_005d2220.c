// FUN_005d2220  005d2220

void __fastcall FUN_005d2220(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28 [9];
  
  local_28[0] = 3;
  local_28[1] = 7;
  local_28[2] = 5;
  local_28[3] = 6;
  local_28[4] = 4;
  local_28[5] = 2;
  local_28[6] = 8;
  local_28[7] = 1;
  local_28[8] = 0;
  iVar1 = FUN_005fb2b0(2);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005fb2b0(2);
    (**(code **)(*piVar2 + 0xb0))(local_28[*(int *)(param_1 + 0x80)]);
    piVar2 = (int *)FUN_005fb2b0(2);
    (**(code **)(*piVar2 + 0x74))();
  }
  return;
}

