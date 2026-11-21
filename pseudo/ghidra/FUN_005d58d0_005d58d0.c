// FUN_005d58d0  005d58d0

undefined1 __fastcall FUN_005d58d0(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x4cc) < 0) ||
     ((*(int *)(param_1 + 0x4cc) == 0 && (*(int *)(param_1 + 0x4d0) < 0)))) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

