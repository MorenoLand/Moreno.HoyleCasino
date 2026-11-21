// FUN_00612138  00612138

/* WARNING: Removing unreachable block (ram,0x0061222d) */

void FUN_00612138(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(*(int *)(unaff_EBP + -0x294) + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -700) = 0;
  }
  else {
    *(int *)(unaff_EBP + -700) =
         (*(int *)(*(int *)(unaff_EBP + -0x294) + 8) - *(int *)(*(int *)(unaff_EBP + -0x294) + 4)) /
         0x48;
  }
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -700);
  if (*(int *)(*(int *)(unaff_EBP + -0x294) + 4) != 0) {
    *(undefined4 *)(unaff_EBP + -0x15c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x294) + 8);
    *(undefined4 *)(unaff_EBP + -0x158) = *(undefined4 *)(*(int *)(unaff_EBP + -0x294) + 4);
    *(undefined4 *)(unaff_EBP + -0x154) = *(undefined4 *)(unaff_EBP + -0x15c);
    *(undefined4 *)(unaff_EBP + -0x150) = *(undefined4 *)(unaff_EBP + -0x158);
    *(undefined1 *)(unaff_EBP + -0x125) = *(undefined1 *)(unaff_EBP + -0x126);
    *(undefined4 *)(unaff_EBP + -0x14c) = *(undefined4 *)(unaff_EBP + -0x154);
    *(undefined4 *)(unaff_EBP + -0x148) = *(undefined4 *)(unaff_EBP + -0x150);
    while (*(int *)(unaff_EBP + -0x148) != *(int *)(unaff_EBP + -0x14c)) {
      *(int *)(unaff_EBP + -0x144) = *(int *)(unaff_EBP + -0x148) + 0x20;
      FUN_005be450();
      *(int *)(unaff_EBP + -0x148) = *(int *)(unaff_EBP + -0x148) + 0x48;
    }
    *(int *)(unaff_EBP + -0x164) =
         (*(int *)(*(int *)(unaff_EBP + -0x294) + 0xc) - *(int *)(*(int *)(unaff_EBP + -0x294) + 4))
         / 0x48;
    *(undefined4 *)(unaff_EBP + -0x160) = *(undefined4 *)(*(int *)(unaff_EBP + -0x294) + 4);
    operator_delete(*(void **)(unaff_EBP + -0x160));
  }
  *(int *)(*(int *)(unaff_EBP + -0x294) + 0xc) =
       *(int *)(unaff_EBP + -0x5c) * 0x48 + *(int *)(unaff_EBP + -100);
  *(int *)(*(int *)(unaff_EBP + -0x294) + 8) =
       *(int *)(unaff_EBP + 0x10) * 0x48 + *(int *)(unaff_EBP + -100);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x294) + 4) = *(undefined4 *)(unaff_EBP + -100);
  FUN_00612661();
  return;
}

