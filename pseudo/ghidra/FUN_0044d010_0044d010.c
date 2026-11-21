// FUN_0044d010  0044d010

void __thiscall FUN_0044d010(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  cVar1 = FUN_0044cfc0(param_2);
  if ((cVar1 != '\0') && (iVar2 = FUN_005dcb00(param_2), iVar2 != 0)) {
    (**(code **)(*DAT_0079070c + 0x290))(param_2);
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      iVar2 = param_2 * 3 + local_8;
      local_10 = *(int *)(param_1 + 0x38 + iVar2 * 8);
      local_c = *(undefined4 *)(param_1 + 0x3c + iVar2 * 8);
      if (0 < local_10) {
        (**(code **)(**(int **)(param_1 + 8 + (param_2 * 3 + local_8) * 4) + 0xc4))(&local_10,0,1);
        return;
      }
    }
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
    FUN_004474b0();
    (**(code **)(*(int *)DAT_0079070c[1] + 8))(1,0);
  }
  return;
}

