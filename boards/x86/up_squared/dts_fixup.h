/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Board level DTS fixup file */

#ifdef CONFIG_SBL_FIXUP

#define DT_UART_NS16550_PORT_0_BASE_ADDR DT_NS16550_81434000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_0_BAUD_RATE DT_NS16550_81434000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_0_NAME	 DT_NS16550_81434000_LABEL
#define DT_UART_NS16550_PORT_0_IRQ	 DT_NS16550_81434000_IRQ_0
#define DT_UART_NS16550_PORT_0_IRQ_PRI	 DT_NS16550_81434000_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_0_IRQ_FLAGS DT_NS16550_81434000_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_0_CLK_FREQ	 DT_NS16550_81434000_CLOCK_FREQUENCY

#define DT_UART_NS16550_PORT_1_BASE_ADDR DT_NS16550_81432000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_1_BAUD_RATE DT_NS16550_81432000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_1_NAME	 DT_NS16550_81432000_LABEL
#define DT_UART_NS16550_PORT_1_IRQ	 DT_NS16550_81432000_IRQ_0
#define DT_UART_NS16550_PORT_1_IRQ_PRI	 DT_NS16550_81432000_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_1_IRQ_FLAGS DT_NS16550_81432000_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_1_CLK_FREQ	 DT_NS16550_81432000_CLOCK_FREQUENCY

#else

#define DT_UART_NS16550_PORT_0_BASE_ADDR DT_NS16550_91524000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_0_BAUD_RATE DT_NS16550_91524000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_0_NAME	 DT_NS16550_91524000_LABEL
#define DT_UART_NS16550_PORT_0_IRQ	 DT_NS16550_91524000_IRQ_0
#define DT_UART_NS16550_PORT_0_IRQ_PRI	 DT_NS16550_91524000_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_0_IRQ_FLAGS DT_NS16550_91524000_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_0_CLK_FREQ	 DT_NS16550_91524000_CLOCK_FREQUENCY

#define DT_UART_NS16550_PORT_1_BASE_ADDR DT_NS16550_91522000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_1_BAUD_RATE DT_NS16550_91522000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_1_NAME	 DT_NS16550_91522000_LABEL
#define DT_UART_NS16550_PORT_1_IRQ	 DT_NS16550_91522000_IRQ_0
#define DT_UART_NS16550_PORT_1_IRQ_PRI	 DT_NS16550_91522000_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_1_IRQ_FLAGS DT_NS16550_91522000_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_1_CLK_FREQ	 DT_NS16550_91522000_CLOCK_FREQUENCY

#endif

/* End of Board Level DTS fixup file */
