// FUN_0060e3c0  0060e3c0

int __fastcall FUN_0060e3c0(int param_1)

{
  uint uVar1;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x95) == '\0') {
    local_c = GetSystemMetrics(7);
    local_c = local_c << 1;
  }
  else {
    local_c = 0;
  }
  uVar1 = FUN_00613600();
  return (uVar1 & 0xffff) + local_c;
}

