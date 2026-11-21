// FUN_0054a610  0054a610

int __fastcall FUN_0054a610(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_0054a4f0(1);
  if (*(char *)(param_1 + 0x24) != '\0') {
    local_c = FUN_0054a4f0(2);
  }
  return iVar1 + local_c;
}

