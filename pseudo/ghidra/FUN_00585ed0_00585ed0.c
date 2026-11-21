// FUN_00585ed0  00585ed0

int __fastcall FUN_00585ed0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    if (*(char *)(*(int *)(param_1 + 4) + 5 + local_8) != '\0') {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

