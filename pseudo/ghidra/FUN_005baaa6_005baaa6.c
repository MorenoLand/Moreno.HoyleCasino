// FUN_005baaa6  005baaa6

/* WARNING: Removing unreachable block (ram,0x005bab87) */

void FUN_005baaa6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(*(int *)(unaff_EBP + -0x24c) + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x274) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x274) =
         *(int *)(*(int *)(unaff_EBP + -0x24c) + 8) - *(int *)(*(int *)(unaff_EBP + -0x24c) + 4) >>
         4;
  }
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x274);
  if (*(int *)(*(int *)(unaff_EBP + -0x24c) + 4) != 0) {
    *(undefined4 *)(unaff_EBP + -0x11c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24c) + 8);
    *(undefined4 *)(unaff_EBP + -0x118) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24c) + 4);
    *(undefined4 *)(unaff_EBP + -0x114) = *(undefined4 *)(unaff_EBP + -0x11c);
    *(undefined4 *)(unaff_EBP + -0x110) = *(undefined4 *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -0xe9) = *(undefined1 *)(unaff_EBP + -0xea);
    *(undefined4 *)(unaff_EBP + -0x10c) = *(undefined4 *)(unaff_EBP + -0x114);
    *(undefined4 *)(unaff_EBP + -0x108) = *(undefined4 *)(unaff_EBP + -0x110);
    while (*(int *)(unaff_EBP + -0x108) != *(int *)(unaff_EBP + -0x10c)) {
      FUN_005be450();
      *(int *)(unaff_EBP + -0x108) = *(int *)(unaff_EBP + -0x108) + 0x10;
    }
    *(int *)(unaff_EBP + -0x124) =
         *(int *)(*(int *)(unaff_EBP + -0x24c) + 0xc) - *(int *)(*(int *)(unaff_EBP + -0x24c) + 4)
         >> 4;
    *(undefined4 *)(unaff_EBP + -0x120) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24c) + 4);
    operator_delete(*(void **)(unaff_EBP + -0x120));
  }
  *(int *)(*(int *)(unaff_EBP + -0x24c) + 0xc) =
       *(int *)(unaff_EBP + -0x24) * 0x10 + *(int *)(unaff_EBP + -0x2c);
  *(int *)(*(int *)(unaff_EBP + -0x24c) + 8) =
       *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x24c) + 4) = *(undefined4 *)(unaff_EBP + -0x2c);
  FUN_005baf9d();
  return;
}

