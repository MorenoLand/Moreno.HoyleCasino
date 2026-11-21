// FUN_005d5920  005d5920

undefined1 __fastcall FUN_005d5920(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x4cc) < 1) &&
     ((*(int *)(param_1 + 0x4cc) != 0 || (*(int *)(param_1 + 0x4d0) < 1)))) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

