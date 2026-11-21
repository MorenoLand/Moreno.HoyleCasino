// FUN_0044d760  0044d760

void __fastcall FUN_0044d760(int param_1)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xd8);
  if (uVar1 != 0) {
    *(undefined1 *)(param_1 + 0xd9) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  local_c = (uint)(uVar1 != 0);
  local_8 = 0;
  while ((int)local_8 < 4) {
    FUN_0044cda0(local_8,CONCAT22((short)(uVar1 >> 0x10),
                                  *(undefined2 *)(param_1 + 0xc0 + local_c * 2)));
    uVar1 = local_8 + 1;
    local_8 = uVar1;
  }
  return;
}

