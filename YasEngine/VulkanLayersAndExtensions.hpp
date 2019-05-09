#ifndef VULKANLAYERSANDEXTENSIONS_HPP
#define VULKANLAYERSANDEXTENSIONS_HPP
#include"stdafx.hpp"

//-----------------------------------------------------------------------------|---------------------------------------|

class VulkanLayersAndExtensions
{
	public:

		VulkanLayersAndExtensions();
		bool							CheckIfAllRequestedLayersAreSupported();
		bool							CheckIfAllRequestedInstanceExtensionAreSupported();
		bool							CheckIfAllRequestedPhysicalDeviceExtensionAreSupported(VkPhysicalDevice device);

        //variables above are just names of layers/extenstions.

		//layers are "connected" with Vulkan APIs and are
		//inserted in chain of Vulkan commands(associated with specified layer)
		//They are used the most for validating the development process
        // Set by programmer. Which validation wanted to use.
		std::vector<const char*>		requestedValidationLayers;

        //They provide additional functionality which are or not
		//part of standard specification. There are to types of extensions
		//Instance-based(independent of any device) and Device-based(specific to the device) they are linked dynamically
		//Pointers to which this functions are linked may be defined in
		// vulkan.h
        // Set by programmer. Which instance extensions wanted to use.
		std::vector<const char*>		requestedInstanceExtensions;

        // Set by programmer. Which device extensions wanted to use. Device extensions are deprecated.
		std::vector<const char*>		requestedDeviceExtensions;

	private:		
};

#endif
