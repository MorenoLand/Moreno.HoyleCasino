// FUN_0060e400  0060e400

int __fastcall FUN_0060e400(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x95) == '\0') {
    local_c = GetSystemMetrics(4);
    iVar1 = GetSystemMetrics(8);
    local_c = local_c + iVar1 * 2;
  }
  else {
    local_c = 0;
  }
  uVar2 = FUN_00613620();
  return (uVar2 & 0xffff) + local_c;
}

