// FUN_0044e970  0044e970

undefined4 __thiscall FUN_0044e970(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_7c [30];
  
  local_7c[0x14] = 8;
  local_7c[0x15] = 10;
  local_7c[0x16] = 2;
  local_7c[0x17] = 1;
  local_7c[0x18] = 5;
  local_7c[0x19] = 5;
  local_7c[0x1a] = 8;
  local_7c[0x1b] = 4;
  local_7c[0x1c] = 6;
  local_7c[0x1d] = 10;
  local_7c[0] = 4;
  local_7c[1] = 10;
  local_7c[2] = 8;
  local_7c[3] = 1;
  local_7c[4] = 5;
  local_7c[5] = 10;
  local_7c[6] = 10;
  local_7c[7] = 6;
  local_7c[8] = 10;
  local_7c[9] = 10;
  local_7c[10] = 8;
  local_7c[0xb] = 10;
  local_7c[0xc] = 5;
  local_7c[0xd] = 5;
  local_7c[0xe] = 5;
  local_7c[0xf] = 2;
  local_7c[0x10] = 8;
  local_7c[0x11] = 4;
  local_7c[0x12] = 4;
  local_7c[0x13] = 10;
  iVar2 = FUN_005dcb00(param_2,param_1);
  iVar2 = (**(code **)(*DAT_0162ee84 + 0x170))(*(undefined4 *)(iVar2 + 8));
  cVar1 = FUN_005da7b0();
  if (cVar1 != '\0') {
    cVar1 = FUN_0044eca0(param_2);
    if (cVar1 != '\0') {
      return local_7c[iVar2];
    }
    cVar1 = FUN_0044ed20(param_2);
    if (cVar1 != '\0') {
      return local_7c[iVar2 + 10];
    }
  }
  return local_7c[iVar2 + 0x14];
}

