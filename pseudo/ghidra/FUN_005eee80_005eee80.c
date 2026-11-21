// FUN_005eee80  005eee80

int __fastcall FUN_005eee80(int param_1)

{
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  while ((*(char *)(*(int *)(param_1 + 0x5c) + local_c) != '\0' &&
         (FUN_005eebf0(local_c,&local_18,&local_14,local_10,0),
         *(char *)(*(int *)(param_1 + 0x5c) + local_18) != '\0'))) {
    local_8 = local_8 + 1;
    local_c = local_14;
  }
  return local_8;
}

