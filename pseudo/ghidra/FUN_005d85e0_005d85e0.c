// FUN_005d85e0  005d85e0

void __fastcall FUN_005d85e0(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_005da810();
  if (cVar1 != '\0') {
    FUN_005f2ba0(0x1391);
    FUN_005f2ba0(0x139b);
    (**(code **)(*param_1 + 0x2f0))();
    if (*(char *)(DAT_007947e0 + 0x4eea) != '\0') {
      *(undefined1 *)(DAT_007947e0 + 0x4eea) = 0;
      (**(code **)(*param_1 + 0x174))(4);
    }
    *(undefined1 *)(DAT_007947e0 + 0x4ee9) = 0;
    *(undefined1 *)(DAT_007947e0 + 0x4ee8) = 1;
  }
  return;
}

