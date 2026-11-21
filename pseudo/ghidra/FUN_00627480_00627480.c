// FUN_00627480  00627480

undefined1 __fastcall FUN_00627480(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x58)) &&
     (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0x5c))) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

