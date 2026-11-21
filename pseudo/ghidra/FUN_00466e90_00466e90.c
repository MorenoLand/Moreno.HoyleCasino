// FUN_00466e90  00466e90

void __fastcall FUN_00466e90(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    FUN_00465d90();
  }
  else {
    FUN_00466820();
  }
  if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0xc0))();
  }
  return;
}

