// FUN_005c8080  005c8080

undefined1 __fastcall FUN_005c8080(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x54) == 0) || (*(int *)(param_1 + 0x54) == 6)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

