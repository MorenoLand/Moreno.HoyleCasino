// FUN_00650310  00650310

undefined1 __fastcall FUN_00650310(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 4) + 4) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

