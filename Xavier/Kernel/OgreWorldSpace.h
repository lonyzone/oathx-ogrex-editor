#ifndef _____OgreWorldSpace_H
#define _____OgreWorldSpace_H

#include "IWorldSpace.h"

namespace kernel
{
	/**
	* \ingroup : Kernel
	*
	* \os&IDE  : Microsoft Windows XP (SP2)  &  Microsoft Visual C++ .NET 2008
	*
	* \VERSION : 1.0
	*
	* \date    : 2012-03-09
	*
	* \Author  : lp
	*
	* \Desc    : 
	*
	* \bug     : 
	*
	*/
	class Kernel_Export_API WorldSpace : public IUnknown
	{
	public:
		/**
		 *
		 * \param void 
		 * \return 
		 */
		WorldSpace(void);

		/**
		 *
		 * \param void 
		 * \return 
		 */
		virtual ~WorldSpace(void);
	};
}

#endif
