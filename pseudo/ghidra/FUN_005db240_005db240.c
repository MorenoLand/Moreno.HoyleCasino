// FUN_005db240  005db240

void __fastcall FUN_005db240(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    FUN_005f2a60(0x1391,0);
    cVar1 = FUN_006026d0();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2e4))(0);
    }
  }
  return;
}

