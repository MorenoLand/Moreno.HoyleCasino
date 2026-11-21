// FUN_005c5af9  005c5af9

/* WARNING: Removing unreachable block (ram,0x005c5bdf) */

void FUN_005c5af9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(*(int *)(unaff_EBP + -0x240) + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x268) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x268) =
         (*(int *)(*(int *)(unaff_EBP + -0x240) + 8) - *(int *)(*(int *)(unaff_EBP + -0x240) + 4)) /
         0x34;
  }
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x268);
  if (*(int *)(*(int *)(unaff_EBP + -0x240) + 4) != 0) {
    *(undefined4 *)(unaff_EBP + -0x128) = *(undefined4 *)(*(int *)(unaff_EBP + -0x240) + 8);
    *(undefined4 *)(unaff_EBP + -0x124) = *(undefined4 *)(*(int *)(unaff_EBP + -0x240) + 4);
    *(undefined4 *)(unaff_EBP + -0x120) = *(undefined4 *)(unaff_EBP + -0x128);
    *(undefined4 *)(unaff_EBP + -0x11c) = *(undefined4 *)(unaff_EBP + -0x124);
    *(undefined1 *)(unaff_EBP + -0x10d) = *(undefined1 *)(unaff_EBP + -0x10e);
    *(undefined4 *)(unaff_EBP + -0x118) = *(undefined4 *)(unaff_EBP + -0x120);
    *(undefined4 *)(unaff_EBP + -0x114) = *(undefined4 *)(unaff_EBP + -0x11c);
    while (*(int *)(unaff_EBP + -0x114) != *(int *)(unaff_EBP + -0x118)) {
      FUN_005c3980();
      *(int *)(unaff_EBP + -0x114) = *(int *)(unaff_EBP + -0x114) + 0x34;
    }
    *(int *)(unaff_EBP + -0x130) =
         (*(int *)(*(int *)(unaff_EBP + -0x240) + 0xc) - *(int *)(*(int *)(unaff_EBP + -0x240) + 4))
         / 0x34;
    *(undefined4 *)(unaff_EBP + -300) = *(undefined4 *)(*(int *)(unaff_EBP + -0x240) + 4);
    operator_delete(*(void **)(unaff_EBP + -300));
  }
  *(int *)(*(int *)(unaff_EBP + -0x240) + 0xc) =
       *(int *)(unaff_EBP + -0x48) * 0x34 + *(int *)(unaff_EBP + -0x50);
  *(int *)(*(int *)(unaff_EBP + -0x240) + 8) =
       *(int *)(unaff_EBP + 0x10) * 0x34 + *(int *)(unaff_EBP + -0x50);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x240) + 4) = *(undefined4 *)(unaff_EBP + -0x50);
  FUN_005c5f9e();
  return;
}

