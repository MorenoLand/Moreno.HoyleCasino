// FUN_00646f30  00646f30

undefined4 __fastcall FUN_00646f30(int param_1)

{
  char cVar1;
  undefined4 local_c;
  
  cVar1 = FUN_005f54c0();
  if (cVar1 == '\0') {
    local_c = (**(code **)(**(int **)(param_1 + 0x18) + 0x54))();
  }
  else {
    local_c = FUN_00646e70();
  }
  return local_c;
}

