// FUN_005be3f0  005be3f0

int __fastcall FUN_005be3f0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_005c9140();
  for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x10) + 8); local_c = local_c + 1) {
    if (*(char *)(param_1 + local_c + 0x34) != '\0') {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

