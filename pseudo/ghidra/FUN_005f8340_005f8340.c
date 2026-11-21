// FUN_005f8340  005f8340

void __fastcall FUN_005f8340(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (param_1 == 0) {
    FUN_005e9f20("false","..\\scilib\\sciplane.cpp",0xd9);
  }
  else {
    for (local_8 = 0; iVar1 = FUN_0060c9a0(), local_8 < iVar1; local_8 = local_8 + 1) {
      piVar2 = (int *)FUN_0060ca40(local_8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xb8))();
      }
    }
  }
  return;
}

