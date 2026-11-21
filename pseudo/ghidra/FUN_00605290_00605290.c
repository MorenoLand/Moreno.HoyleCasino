// FUN_00605290  00605290

int __fastcall FUN_00605290(int param_1)

{
  char cVar1;
  int local_c;
  
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    local_c = (**(code **)(**(int **)(param_1 + 0x48) + 0x54))();
    local_c = local_c - *(int *)(param_1 + 100);
  }
  else {
    local_c = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
    local_c = local_c - *(int *)(param_1 + 0x5c);
  }
  return local_c;
}

