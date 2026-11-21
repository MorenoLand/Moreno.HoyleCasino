// FUN_0060c3d0  0060c3d0

void __fastcall FUN_0060c3d0(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_0062dbb0(param_1[0x17]);
  if (cVar1 != '\0') {
    param_1[0x28] = 0;
    (**(code **)(*param_1 + 0xac))();
  }
  return;
}

