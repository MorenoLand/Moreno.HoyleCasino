// FUN_00536250  00536250

int __fastcall FUN_00536250(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    if (*(char *)(param_1 + local_c + 0x10) != '\0') {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

