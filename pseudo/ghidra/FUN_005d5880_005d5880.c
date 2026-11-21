// FUN_005d5880  005d5880

undefined1 __fastcall FUN_005d5880(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x4c4) < 0) ||
     ((*(int *)(param_1 + 0x4c4) == 0 && (*(int *)(param_1 + 0x4c8) < 0)))) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

