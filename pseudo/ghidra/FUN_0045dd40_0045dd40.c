// FUN_0045dd40  0045dd40

void __fastcall FUN_0045dd40(int *param_1)

{
  int iVar1;
  
  if (param_1[0x20] != 1) {
    iVar1 = (**(code **)(*param_1 + 0x25c))();
    *(undefined1 *)(iVar1 + 0x4a0) = 1;
  }
  FUN_0045b300();
  return;
}

