// FUN_0060e450  0060e450

void __fastcall FUN_0060e450(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  tagRECT local_2c;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  GetWindowRect(*(HWND *)(param_1 + 0x8c),&local_1c);
  *(LONG *)(param_1 + 8) = local_1c.left;
  *(LONG *)(param_1 + 0xc) = local_1c.top;
  *(LONG *)(param_1 + 0x10) = local_1c.right;
  *(LONG *)(param_1 + 0x14) = local_1c.bottom;
  GetClientRect(*(HWND *)(param_1 + 0x8c),&local_2c);
  InvalidateRect(*(HWND *)(param_1 + 0x8c),&local_2c,1);
  *(LONG *)(param_1 + 0x18) = local_2c.left;
  *(LONG *)(param_1 + 0x1c) = local_2c.top;
  *(LONG *)(param_1 + 0x20) = local_2c.right;
  *(LONG *)(param_1 + 0x24) = local_2c.bottom;
  uVar1 = FUN_006135c0();
  uVar2 = FUN_00613600();
  local_8 = (int)((uVar1 & 0xffff) - (uVar2 & 0xffff)) / 2;
  uVar1 = FUN_006135e0();
  uVar2 = FUN_00613620();
  local_c = (int)((uVar1 & 0xffff) - (uVar2 & 0xffff)) / 2;
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  uVar1 = FUN_00613620();
  iVar3 = (uVar1 & 0xffff) + local_c;
  uVar1 = FUN_00613600();
  *(int *)(param_1 + 0x28) = local_8;
  *(int *)(param_1 + 0x2c) = local_c;
  *(uint *)(param_1 + 0x30) = (uVar1 & 0xffff) + local_8;
  *(int *)(param_1 + 0x34) = iVar3;
  return;
}

